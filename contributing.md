# Group8 Website - Content, Issues, Requests and Edits

## How to contribute
See the Group8 [contributing.md](https://github.com/XXXX/CONTRIBUTING.md)

## Repository specific guidelines
* For general issues, please use the Issues 
* For content requests, edits, and enhancements, please use Pull requests
Content requests could include upcoming events you would like to see posted on the site, project specific information, or requested edits.

## Wordpress/Github Markdown Content

The site is built using GitHub content areas. Editing content in the associated GitHub markdown files will edit content on the Wordpress production site.

Editable content are in folders in this repo and are named for the websites key navigation pages. Within these folders are pages and content areas in markdown files. The content areas are named using the header for the content section.

To edit these content areas, please fork the repo, make changes to the markdown files, and put in a pull request.

For questions, please email the site [maintainers](README.md).

## How to become a maintainer of the website and this repository
1. Make consistent contributions via pull requests.
2. The Group8 board will analyze consistency and elect invite contributors to be new maintainers on a bi-monthly basis. 

## Understanding the basics about contributions

We welcome contributions to Group8 and encourage you to follow the GitHub workflow specified below. If you are not familiar with this type of workflow, take a look at GitHub's excellent overview on the [GitHub flow](https://guides.github.com/introduction/flow/index.html) and the explanation of [Feature Branch Workflow](https://atlassian.com/git/tutorials/comparing-workflows#feature-branch-workflow) for the idea behind this kind of development.

1. Get the Group8 code on your local machine
    1. Fork the Group8 into your GitHub account.
    2. Clone your forked repository on your local machine.
2. **Create a new branch** (such as `fix-for-issue-999`). Be sure to create a **separate branch** for each improvement you implement.
3. Do your work on the **new branch - not the master branch.
4. Create a pull request. For an overview of pull requests, take a look at GitHub's [pull request help documentation](https://help.github.com/articles/about-pull-requests/).
5. In case your pull request is not yet complete or not yet ready for review, consider creating a [draft pull request](https://github.blog/2019-02-14-introducing-draft-pull-requests/) instead.

### Test your code

We know that writing test cases takes a lot of time.
Nevertheless, we rely on our test cases to ensure that a bug fix or a feature implementation doesn't break anything.
In case you do not have time to add a test case, we nevertheless ask you to at least run `gradlew check` to ensure that your change doesn't break anything else.

## Create a pull request

Create a pull request on GitHub following GitHub's guide "[Creating a pull request from a fork](https://help.github.com/en/github/collaborating-with-issues-and-pull-requests/creating-a-pull-request-from-a-fork)".
For text inspirations, consider [How to write the perfect pull request](https://github.com/blog/1943-how-to-write-the-perfect-pull-request).

If you want to indicate that a pull request is not yet complete **before** creating the pull request, you may consider creating a [draft pull request](https://github.blog/2019-02-14-introducing-draft-pull-requests/).
Alternatively, once the PR has been created, you can add the prefix `[WIP]` (which stands for "Work in Progress") to indicate that the pull request is not yet complete, but you want to discuss something or inform about the current state of affairs.

[commit guidelines section of Pro Git]: http://git-scm.com/book/en/Distributed-Git-Contributing-to-a-Project#Commit-Guidelines
[good commit message]: https://github.com/joelparkerhenderson/git_commit_message
