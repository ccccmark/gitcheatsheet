# GitCheatSheet

This is the summary of the Git usage, but first, what is Git?
Git is the version control for programs, and also for the sake of controlling the versions ans so on.
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
