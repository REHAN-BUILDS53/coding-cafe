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

## Question 9 — The 4 steps of the repetitive Git loop

The four steps are: edit, stage, commit, and repeat. First, make changes to files. Second, use `git add` to stage the changes. Third, use `git commit` to save a snapshot in the repository. Finally, repeat the process as the project develops.

## Question 10 — Special purpose and placement of `README.md`

`README.md` is the main introductory and documentation file for a repository. It usually explains what the project is, how to use or run it, and other important information. It is normally placed in the root directory of the repository so GitHub can automatically display it on the repository's front page.

## Question 11 — How `gh auth login` eliminates future password prompts

`gh auth login` authenticates the GitHub CLI with a GitHub account. After successful authentication, the authentication information is stored securely, allowing GitHub CLI operations to use the authenticated account without repeatedly asking for a password.

## Question 12 — File rendered on GitHub's front page and the reason why

GitHub automatically renders the repository's `README.md` on the repository's front page. This is because `README.md` is conventionally used as the main documentation and introduction for a repository, and GitHub renders its Markdown formatting into a readable webpage.

## Question 13 — Effect of `git push` on local history

`git push` sends committed changes from the local repository to the remote repository, such as GitHub. It does not create a new commit or change the existing local commit history. The local commits already exist; `git push` transfers those commits to the remote repository.

## Question 14 — Distinction between a private repository vs. no repository on GitHub

A private repository exists on GitHub, but its contents are restricted to people who have permission to access it. Having no repository on GitHub means there is no remote GitHub repository for the project. A local Git repository can exist without any GitHub repository. Creating a GitHub repository and pushing the local repository establishes the remote copy.