# GitCheatSheet

This is the summary of the Git usage, but first, what is Git?

Git is the version control for programs, and also for the sake of controlling the versions and so on.

Below Git we can find centres for the version control, such as GitHub (which is the page where your are reading this Markdown), GitLab, etc.

In this centres you can find other Gits, called repositories, in those repositories is where you can control the versions of programs you are coding.

Now let's talk about some commands for this summary:

# Installing Git

There are many ways to install Git, and it depends from operating system that you are using.

```
sudo apt-get/apt install git
```
This command will install Git and it's components for the correct usage of git on Linux on Debian.

```
sudo yum install git
```
This command installs Git for Fedora.

For MAC, Git needs to be downloaded, it can be either downloaded the Terminal or from the website.
You can type on the Terminal:
```
git
```
In this way, if you are running it from the first time, you will be prompted to install it.

You can also download the user-friendly installer from ```http://git-scm.com/download/mac```

For Windows, you can install Git from ```http://windows.github.com/```. This will have more enhancements including usage from PowerShell and encryption.

Now, you have git installed! Let's configure it.


# Configuring Git

To configure Git, you will need to specify the location where you will going to upload your submissions, we use the command:

```
git config --global user.name <yourgitcentreusername>
```
Where ```yourgitcentreusername``` is the username where you are going to upload you commits.

```
git config --global user.email <yourgitcentreemail>
```
Where ```yourgitcentreemail``` is the e-mail where you are registered in your preferred git centre.

Also, you can set you default editor for Git in case Git prompts you to add a message for a certain option. You use this command:

```
git config --global core.editor <yourpreferrededitor>
```

Where ```yourpreferrededitor``` is where you input your editor for git.

# Getting a repository

There are two ways for getting a repository:

## Initializing a repository

Once you have created a subdirectory for your repository, you can start your repository using:

```
git init
```

This will create a new subdirectory called ```.git```, which contains the necessary files for the repository.

If you wish to create a new commit, you need to do the following:

```
git add <yourfile.extension>
git add LICENSE
git add README.md
```
In this way, you will add the files you want to commit.

```
git commit -m "<yourcommitmessage>"
```
In this way, you will commit the changes you made with a message, if you only use ```git commit```, you will be prompted to add a message on your preferred editor.

## Cloning a repository

If you wish to start a repository, but you don't want to start from scratch, you can clone a previous repository, you will only need to use the command:

```
git clone
```
To get a repository, you just need to enter this command:

```
git clone <url>
```

Where ```url``` is the link of the repository you want to clone, but if you wish to clone the repository to a specific folder, you will only add the directory at the end of the url.

```
git clone <url> yourdirectory
```

# Saving changes to a repository

Saving changes to the repository will be confusing, but if you know how to do it, it will be easy for you.

The files can be tracked or untracked, depending of the files you are editing.

Tracked files are the files that were on a previous snapshot, can be modified or not, or staged.

Untracked files are files that are normally files, nothing else, they are like a regular file, and they are not staged or saved on the snapshot.


If you clone a repository, all files will be tracked because they aren't modified.

Modifying a file will notify Git when the file has been in that state, and you need to tell Git to track it again.

## Getting the status of the repository

If you want to know about what is the status of the files, you just put the command:
```
git status
```
In this way, you will have the status of your repository, like this:

```
$ git status
On branch master
Your branch is ahead of 'origin/master' by 1 commit.
  (use "git push" to publish your local commits)

nothing to commit, working tree clean
```

But if you have something that is not tracked, when you execute the command, you will get this:

```
$ git status
On branch master
Your branch is ahead of 'origin/master' by 1 commit.
  (use "git push" to publish your local commits)

Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git checkout -- <file>..." to discard changes in working directory)

        modified:   README.md

no changes added to commit (use "git add" and/or "git commit -a")
```

And you will be prompted to add the modified file.


The ```git status``` command also tells you when a file is new, but is not tracked:

```
$ git status
On branch master
Your branch is up-to-date with 'origin/master'.
Changes to be committed:
  (use "git reset HEAD <file>..." to unstage)

    new file:   README

```

```git status``` also can be shorten, if you put the option ```-s``` or ```--short``` at the end:

```
$ git status -s
 M README.md
```

The symbols are as follows:

* ```?? <file.ext>```, the ```??``` symbol is when a new file has been added, but it has not tracked.
* ```M <file.ext>```, the ```M``` symbol means that the file has been modified.
* ```A <file.ext>```, the ```A``` symbol means that the file has been added for tracking.


## Adding a file

To add the file or files you want to add, you only put this command

```
git add <yourfile.extension>
```
- Note: You need to add every file to Git to commit.

When you execute the ```git status```, you will get something like this:

```
$ git status
On branch master
Your branch is up to date with 'origin/master'.

Changes to be committed:
  (use "git reset HEAD <file>..." to unstage)

        modified:   README.md

```

If you want to add the new file, you can just input the command ```git add <yourfile.extension>```.

## Ignoring files

To ignore files in Git, add a new ```.gitignore``` file in your repository, then you will get a new file where you can edit so Git knows what files should be ignored.

You just need to edit the file to put the extensions that Git should ignore.

Some rules that must be applied in the ```.gitignore``` file are:

* The blank lines or lines that starts with ```#``` are ignored.
* Put the ```*.ext``` on a line, where the ```ext``` means to an extension that you wish that Git ignore.
* Put the ```*.[ext1ext2]```, where the both ```ext1``` and the ```ext2``` are the extensions that you wish Git to ignore
* Put the ```*~```, where the files with ```~``` should be ignored.
* Put ```/``` at the end a pattern to specify a directory.
* Put ```/``` at the start of the pattern to avoid recursivity or infinite or reverse 
* Put ```!``` to negate a pattern

Here is an example of a ```.gitignore``` file

```
# Files with .out will be ignored
*.out

# Files on this directory will be ignored
test/

# Files with .a will be ignored
*.a

# But the file test.out will be tracked, even if .out files are ignored
!test.out
```

## Staged and unstaged changes

If ```git status``` it's not enough, you can use the ```git diff``` command to view the changes of the actual repository.

```
$ git diff
diff --git a/README.md b/README.md
index ddd9c09..a9f83bd 100644
--- a/README.md
+++ b/README.md
@@ -243,4 +243,9 @@ test/
 !test.out
```

If you put ```git diff``` with no arguments, all the files that had been modified will be displayed, but if you want to see a specific modified file, you need to put ```git diff  <yourfile>``` where ```yourfile``` is the file you wish to see their differences.

To go across the file, press the Enter key to go more beyond the file, and if you want to quit at anytime, you press the Q key.


To see what will be added in the next commit, put the ```--staged``` or the ```--cached``` option aside the ```git diff``` command.


# Commiting changes

To commit changes, you need to use the command ```git commit```, doing this, Git will open your editor to enter a message:

```
# Please enter the commit message for your changes. Lines starting
# with '#' will be ignored, and an empty message aborts the commit.
# On branch master
# Your branch is up-to-date with 'origin/master'.
#
# Changes to be committed:
#	modified:   README.md
#	new file:   c.c
#
```

Alternatively, you can put a message to your commit aside of the ```git commit``` command by using ```-m``` option, then the message you want for your commit with quotes.
