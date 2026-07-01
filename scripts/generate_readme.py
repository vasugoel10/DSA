from pathlib import Path
from datetime import datetime
from urllib.parse import quote
import re

# =====================================================
# Configuration
# =====================================================

ROOT = Path(__file__).resolve().parent.parent

IGNORE = {
    ".git",
    ".github",
    "scripts",
    "__pycache__",
    ".vscode",
}

# Words that should stay fully uppercase instead of being title-cased
ACRONYMS = {"bst", "dsu", "stl", "lcs", "lca", "gcd", "lcm", "dp", "bfs", "dfs"}

topics = []
total_problems = 0


def clean_name(name: str) -> str:
    """Convert folder/file names into readable, title-cased names."""
    # Remove numeric prefix (01_, 1_, 001_, etc.)
    name = re.sub(r"^\d+[_-]?", "", name)

    # Replace underscores/hyphens with spaces
    name = name.replace("_", " ").replace("-", " ").strip()

    # Title-case each word, preserving known acronyms
    words = [
        w.upper() if w.lower() in ACRONYMS else w.capitalize()
        for w in name.split()
    ]

    return " ".join(words)


def problem_label(file: Path, topic_folder: Path) -> str:
    """Build a readable problem label, including subfolder context if nested."""
    label = clean_name(file.stem)

    if file.parent != topic_folder:
        parent_label = clean_name(file.parent.name)
        label = f"{parent_label} — {label}"

    return label


def safe_relative_link(file: Path, root: Path) -> str:
    """Build a markdown-safe relative link, URL-encoding spaces/special chars."""
    relative_path = file.relative_to(root).as_posix()
    return quote(relative_path)


# =====================================================
# Scan Repository
# =====================================================

for folder in sorted(ROOT.iterdir()):

    if not folder.is_dir():
        continue

    if folder.name in IGNORE:
        continue

    cpp_files = sorted(folder.rglob("*.cpp"))

    if not cpp_files:
        continue

    topics.append((folder, cpp_files))
    total_problems += len(cpp_files)

# =====================================================
# README HEADER
# =====================================================

readme = f"""# 🚀 Data Structures & Algorithms in C++

> A curated collection of my **C++** solutions to Data Structures & Algorithms problems.

---

## 📊 Repository Statistics

| Metric | Count |
|:------|------:|
| 📚 Topics | {len(topics)} |
| ✅ Problems Solved | {total_problems} |
| 🕒 Last Updated | {datetime.now().strftime("%d %B %Y")} |

---

## 📂 Topics

"""

# =====================================================
# Generate Topic Sections
# =====================================================

for folder, files in topics:

    topic_name = clean_name(folder.name)
    count = len(files)
    label = "Problem" if count == 1 else "Problems"

    readme += (
        f"<details>\n"
        f"<summary><b>📁 {topic_name} ({count} {label})</b></summary>\n\n"
        f"| Problem | Solution |\n"
        f"|---------|----------|\n"
    )

    for file in files:
        problem = problem_label(file, folder)
        relative_path = safe_relative_link(file, ROOT)

        readme += f"| {problem} | [Code]({relative_path}) |\n"

    readme += "\n</details>\n\n"

# =====================================================
# Footer
# =====================================================

readme += """---

## 🎯 Goals

- Solve 500+ DSA Problems
- Improve problem-solving skills
- Prepare for coding interviews
- Master Data Structures & Algorithms

---

### 💻 Language

- C++17

---

⭐ If you found this repository helpful, consider giving it a ⭐!
"""

# =====================================================
# Write README
# =====================================================

(ROOT / "README.md").write_text(readme, encoding="utf-8")

print("=" * 50)
print("README updated successfully!")
print(f"Topics           : {len(topics)}")
print(f"Problems Solved  : {total_problems}")
print("=" * 50)