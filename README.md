# Laboratory work 2
## Part I
1. Created new repository with `MIT license`, `README.md`, `.gitignore` and `hello_world.cpp`.
2. Implemented the program **Hello World**.
![Img 1](./images/HelloWorld.png)
![Img 2](./images/program_one.png)
3. Then I changed `hello_world.cpp` for work with user.
![Img 3](./images/HelloWorldFrom.png)
![Img 4](./images/program_two.png)
 - Compiled programs with command `g++ hello_world.cpp -o hello_world`.
4. Commited new version using `git commit -a`.
5. Pushed all changes `git push -u origin main`.

## Part II
1. Created new branch **patch1** using `git branch patch1`.
2. Get out of `using namespace std`.
![Img 5](./images/CorrectHelloWorld.png)
3. Created *pull request*.
![Img 6](./images/Pull_Request.png)
4. Added commit of comments and push it on *github*.
![Img 7](./images/Commit_of_comments.png)
5. Merged new branch with default and deleted *patch1* from remote and local repository.

## Part III
1. Created new branch `patch2`.
2. Installed utility `clang-format` to change code style.
 - Used `clang-format -i --style=Mozilla`.
3. Changed comments in *main* in remote repository.
4. In *pull request* appeared *conflicts*.
![Img 8](./images/Conflict.png)
5. I fixed conflicts using `git mergetool` graphical tool **meld**.
![Img 9](./images/Meld.png)
6. Then I use `git push --force origin patch2` to make changes and modify history of last commit.
7. Conflicts were fixed. 
![Img 10](./images/Fix.png)
