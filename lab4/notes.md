# Lab 4 Notes

## Question 1 — Meaning of `--global` in `git config`

`--global` means the Git configuration applies to the current user across all repositories on the computer. If `--global` is omitted, the configuration applies only to the current repository.

## Question 2 — Contents of `.git` revealed by `ls -a`

The `.git` directory contains Git's internal data for the repository, including `HEAD`, `config`, `objects/`, `refs/`, `index`, and `logs/`. The `.git` directory is what makes the directory a Git repository.

## Question 3 — Approximate untracked file count and identifying untracked code

The exact number of untracked files depends on the files created during the lab. `git status` shows untracked files under the "Untracked files" section. Source-code files such as `.py` files are code files, while `.md` files are documentation or notes. An untracked file is a file that exists in the working directory but has not yet been added to the staging area.

## Question 4 — Difference in `git status` after creating `.gitignore`

Before creating `.gitignore`, files and folders such as `.venv/`, `__pycache__/`, and `.pyc` files may appear as untracked. After creating `.gitignore` with the required rules, Git ignores those files, so they no longer appear as untracked in `git status`. The `.gitignore` file itself appears as an untracked file because it should be tracked by Git.

## Question 5 — Why `.gitignore` itself should be committed

`.gitignore` should be committed because it contains the rules that tell Git which files and folders to ignore. By committing it, everyone working with the repository gets the same ignore rules. The `.gitignore` file is tracked, while the files and folders listed inside it are ignored.

## Question 6 — Movement of `README.md` across sections in `git status`

Git can be understood using a three-place model: the working directory, the staging area, and the repository. A file starts in the working directory. After `git add README.md`, it moves to the staging area. After `git commit`, it becomes part of the repository's committed history.

## Question 7 — Output produced by `git commit` and count of changed files

`git commit` creates a new snapshot in Git's history. Its output normally shows the commit hash, branch name, commit message, number of files changed, and the number of insertions and deletions. The exact number of changed files depends on what was staged before running `git commit`.

## Question 8 — Name and purpose of the first seven characters of a commit hash

The first seven characters are a shortened form of the commit hash, also called the short commit ID. They identify a particular commit and provide a convenient way for humans to refer to it.
