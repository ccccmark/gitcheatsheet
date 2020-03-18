# GitCheatSheet

This is the summary of the Git usage, but first, what is Git?

Git is the version control for programs, and also for the sake of controlling the versions and so on.

Below Git we can find centres for the version control, such as GitHub (which is the page where your are reading this Markdown), GitLab, etc.

In this centres you can find other Gits, called repositories, in those repositories is where you can control the versions of programs you are coding.

Now let's talk about some commands for this summary:

```
# Installing Git

// There are many ways to install Git, and it depends from operating system that you are using.
sudo apt-get/apt install git // This command will install Git and it's components for the correct usage of git on Linux on Debian.
sudo yum install git // Git for Fedora.
git // For MAC, the first time, you will be prompted to install it.

# Configuring Git

git config --global user.name <yourgitcentreusername> // specifies the location where you will going to upload your submissions
//yourgitcentreusername is the username where you are going to upload you commits.
git config --global user.email <yourgitcentreemail>
// yourgitcentreemail``` is the e-mail where you are registered in your preferred git centre.
// Also, you can set you default editor for Git in case Git prompts you to add a message for a certain option.
git config --global core.editor <yourpreferrededitor> // This is the command, where ```yourpreferrededitor``` is where you input your editor for git.

# Getting a repository

There are two ways for getting a repository:

## Initializing a repository

git init // This will create a new subdirectory called ```.git```, which contains the necessary files for the repository.

git add <yourfile.extension>
git add LICENSE
git add README.md
// You need to add this to your file before commiting, so we use this command

git commit // Start to commit, but you need to leave a message
git commit -m "<yourcommitmessage>" // Skips the leaving the message option

## Cloning a repository

git clone // Clones the repository
git clone <url> // Clones from a url, where ```url``` is the link of the repository you want to clone
git clone <url> yourdirectory // Clones from a url, in a specific directory

# Saving changes to a repository

## Getting the status of the repository

git status // Shows the status of the files if they are new files or modified files status
git status -s
git status --short
// Short mode of git status

## Ignoring files

.gitignore // File for the files to be ignored.

// Rules:
// The blank lines or lines that starts with # are ignored.
// Put the*.ext on a line, where the ext means to an extension that you wish that Git ignore.
// Put the .[ext1ext2]where the both ext1 and the ext2 are the extensions that you wish Git to ignore
// Put the *~, where the files with ~ should be ignored.
// Put / at the end a pattern to specify a directory.
// Put / at the start of the pattern to avoid recursivity or infinite or reverse 
// Put ! to negate a pattern

// Example of .gitignore
# Files with .out will be ignored
*.out

# Files on this directory will be ignored
test/

# Files with .a will be ignored
*.a

# But the file test.out will be tracked, even if .out files are ignored
!test.out

//This line ends the example

## Staged and unstaged changes

git diff // Command to view the changes of the actual repository.
git diff <yourfile> // Command to view changes of specific file yourfile is the file you wish to see their differences.

// To go across the file, press the Enter key to go more beyond the file, and if you want to quit at anytime, you press the Q key.


git diff --staged
git diff --cached
// Options to view what files will be added in next commit.


## Commiting changes

git commit //Doing this, Git will open your editor to enter a message for your commit:

// Example
# Please enter the commit message for your changes. Lines starting
# with '#' will be ignored, and an empty message aborts the commit.
# On branch master
# Your branch is up-to-date with 'origin/master'.
#
# Changes to be committed:
#	modified:   README.md
#	new file:   c.c
#

// End of Example

git commit -m // Option to type a message, also you need to put the message in quotes.

## Skipping the Staging Area

To skip the Staging Area, you will need to use ```-a``` option aside the ```git commit``` command, this will, not only add the files, it will also add all the already tracked files.


```
$ git status
On branch master
Your branch is up-to-date with 'origin/master'.
Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git checkout -- <file>..." to discard changes in working directory)

    modified:   README.md
    new file:   c.c

no changes added to commit (use "git add" and/or "git commit -a")

$ git commit -a -m 'New file .c'
[master 83e38c7] New file.c
 1 file changed, 1 file added, 12 insertions(+), 0 deletions(-)
```

## Removing a file

To remove a file, you only need to stop Git from tracking that file, if you want to do so, ```git rm``` can do that.

If you delete only the file, Git won't be aware of that deletion.

```
rm c.c
$ git status
On branch master
Your branch is up-to-date with 'origin/master'.
Changes not staged for commit:
  (use "git add/rm <file>..." to update what will be committed)
  (use "git checkout -- <file>..." to discard changes in working directory)

        deleted:    c.c

no changes added to commit (use "git add" and/or "git commit -a")
```

Then, if you run ```git rm <yourdeletedfile>``` where ```yourdeletedfile``` is the file that you deleted.

```
$ git rm c.c
rm c.c
$ git status
On branch master
Your branch is up-to-date with 'origin/master'.
Changes to be committed:
  (use "git reset HEAD <file>..." to unstage)

    deleted:    c.c
```
If you wish Git to not to track a file anymore, but you want to keep it in your local repository, you put ```git rm --cached <yourfile>```, where ```yourfile``` is the file you wish Git to stop tracking.


## Moving files

Although in most common cases, the command ```mv``` is for moving, in Git, ```git mv``` is for renaming and moving.

You put the command as ```git mv <infile> <outfile>```, where ```infile``` and ```outfile``` are the names you wish to rename.

```
$ git mv c.c programming.c
$ git status
On branch master
Your branch is up-to-date with 'origin/master'.
Changes to be committed:
  (use "git reset HEAD <file>..." to unstage)

    renamed:    c.c -> programming.c
```

# Viewing the history

To view the history, you can use the command ```git log```, this will show all the commits you made.

```
$ git log
commit bc6b98b8a0fda672d80c8f6ec45f83367acf0645 (HEAD -> master, origin/master)
Author: myname <myemail@domain.com>
Date:   Wed Mar 18 14:59:56 2020 -0600

    New inf

commit 5cf7a1dd3b801854e69582284df9f4ba845d0899
Author: myname <myemail@domain.com>
Date:   Wed Mar 18 14:58:37 2020 -0600

    New inf

commit 7aa8fa8f5ee465c26a2ddc1716dc38b23e0ba874
Author: myname <myemail@domain.com>
Date:   Wed Mar 18 14:47:17 2020 -0600

    New info

commit 89c0b6399fd74a7bc6dc0bee30abbf16e28c6843
Author: myname <myemail@domain.com>
Date:   Wed Mar 18 14:33:16 2020 -0600

    New info

commit e16846f0397b7ee1652c8861d6060b4920090b45
Author: myname <myemail@domain.com>
Date:   Wed Mar 18 14:22:49 2020 -0600
```

If you wish to scroll down through all the commits, press the Enter key, to quit, press the Q key.

Using ```git log -p``` will show you the commits And the changes you have made in your Git, putting a number ```-n``` will show you just an specific entry or entries. It's similar to ```git diff``` but with more information.


Using ```git log --stat``` shows you the changes that you have made, insertions and deletions.

```
$ git log --stat
commit ee9fad6984ab4e7024a941e267149605b5db13b7 (HEAD -> master, origin/master)
Author: myname <myemail@domain.com>
Date:   Wed Mar 18 15:09:45 2020 -0600

    Log info

 README.md | 35 +++++++++++++++++++++++++++++++++++
 1 file changed, 35 insertions(+)

commit bc6b98b8a0fda672d80c8f6ec45f83367acf0645
Author: myname <myemail@domain.com>
Date:   Wed Mar 18 14:59:56 2020 -0600

    New inf

 README.md | 2 +-
 1 file changed, 1 insertion(+), 1 deletion(-)

commit 5cf7a1dd3b801854e69582284df9f4ba845d0899
Author: myname <myemail@domain.com>
Date:   Wed Mar 18 14:58:37 2020 -0600

    New inf

 README.md | 19 +++++++++++++++++++
 1 file changed, 19 insertions(+)
```

Again, if you wish to scroll down, press the Enter key, Q key will quit the command.

Using ```git log --pretty``` will change the format that the commits will be shown, for instance, the ```git log --pretty=oneline``` will show the commits in one single line:

```
$ git log --pretty=oneline
7623ece1cfeee3471abc3b3992868668ab1a2bba (HEAD -> master, origin/master) History info
ee9fad6984ab4e7024a941e267149605b5db13b7 Log info
bc6b98b8a0fda672d80c8f6ec45f83367acf0645 New inf
5cf7a1dd3b801854e69582284df9f4ba845d0899 New inf
7aa8fa8f5ee465c26a2ddc1716dc38b23e0ba874 New info
89c0b6399fd74a7bc6dc0bee30abbf16e28c6843 New info
e16846f0397b7ee1652c8861d6060b4920090b45 Test
b315494b9df8dfd543f468668ba2ed5e128bd600 Test
8b4d6ed057bb64020dc6331c67fabacc787e85cb deleted
d14a140b39df4eeeaac081c0b85ee7a58ff3df65 deleted
c5e77976520ad764c271c75928ded8637ca78fea More info
97f82029fe35d8d15a44070cc2cfaa50f5431777 More info
e05cec2036e360dba68b6bb5e66343902010bff3 More info
d4877b7c74ecc4df29d2d229f887e55b465c2fb4 Examples
b9720dab8ca142f115c6ea724af5126fc371bb3f Re-structured
4aa50fe52901c6b91c2aa217945ec3cf381eca2f Re-structured
eeffe0f8a0f196df0fe8b641dd6a244214e8cf06 Re-structured
9de280fec1fb4ce2dd6a34ac3c3f93c35bb71a6c Re-structured
46175aa23c5e6a4b4221bb9c971544870617c9da Status info added
02840b084742c501a6a538d3eb4e7957e86d0f7d git status info
bb5c438e3a46761b2d4dcaab1b5dd97a61841e15 git status info
d97e59b447861db9fb331212413375b45ce6b624 git status info
802ebac8d37e68a3ed265e4bb0160fb597512c10 More info
e46c012c38716f7453bf6471defc5243a8de7f11 More info
4164908e05282a94ea213e6dc3a17eb5a7236760 More info
380211dcee2af82b8a18478009a4537b660a7851 More info
b96cb864af2b6cceb48bf1eeba24e3a15b80022a Corrections ans to and
2c829dfa2ce460fde019a2e0a22197eb515aabbe New info
```

*Scroll down = Enter, Q = Quit

The most interesting option is ```format```, because you specify the format you want to use, you can follow this table for format:

| Option | Description |
|----------|-----------------|
|```%H```| Commit Hash |
|```%h```| Commit Hash (Abbreviated) |
|```%T```| Tree Hash |
|```%t```| Tree Hash (Abbreviated) |
|```%P```| Parent Hashes |
|```%p```| Parent Hashes (Abbreviated) |
|```%an```| Author Name |
|```%ae```| Author E-mail|
|```%ad```| Author Date |
|```%ar```| Author Date, relative|
|```%cn```| Committer Name |
|```%ce```| Committer Email |
|```%cd```| Commiter Date |
|```%cr```| Commiter Date, relative |
|```%s```| Subject |

Author and Committer are similar, although Author is the person who made the work and Committer is the person who last applied the work.

Also, ```--graph``` is a useful option for getting an ASCII graph to view your commits and branches.

By now, only this options are important for ```git log```, but you can find many other options on other sources.

## Limiting Log Output


