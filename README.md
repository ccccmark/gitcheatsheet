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

But if you have something that is not commited, when you execute the command, you will get this:

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

And you will be prompted to commit the repository.
