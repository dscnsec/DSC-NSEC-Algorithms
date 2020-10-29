# Contribution Guidelines

## Before Contributing
Welcome to [DSC NSEC Algorithms](https://github.com/dscnsec/DSC-NSEC-Algorithms)! Before submitting pull requests, please make sure that you have 
**read the whole guidelines**. If you have any doubts about this contribution guide, please open 
[an issue](https://github.com/dscnsec/DSC-NSEC-Algorithms/issues/new/choose) and clearly state your concerns.

## Contributing

### Contributor
We are very happy that you consider implementing algorithms and data structures for others! This repository is referred to and used by many learners. Being one of our contributors, you agree and confirm that:
- You did your own work.
    - No plagiarism allowed.  Any plagiarized work will not be merged.
- Your work will be distributed under [MIT License](License) once your pull request has been merged.
- You submitted work fulfils or mostly fulfils our styles and standards.

**New implementation** New implementation are welcome!

**Improving comments** in existing algorithms are much appreciated.

**Issues** Please avoid opening issues asking to be "assigned” to a particular algorithm.  This merely creates unnecessary noise for maintainers.  Instead, please submit your implementation in a pull request and it will be evaluated by project maintainers.

### Making Changes

#### Code
- Please use the directory structure of the repository.
- File extension for code should be *.cpp.
- Please use **bits/stdc++.h**.
- If an implementation of the algorithm already exists, please refer to the [file-name section below](#new-file-name-guidelines).
- You can suggest reasonable changes to existing algorithms.
- Strictly use snake_case (underscore_separated) in filenames.
- If you have added or modified code, please make sure the code compiles before submitting.
- **Be consistent in use of these guidelines.**

#### Documentation
- An input file (ipp.txt) and an output file(opp.txt) with the correct answer of inputs will be provided in each directory of a particular data structure/ algorithm. 
- You must write the code which would generate an answer file(ans.txt).
- ans.txt and opp.txt files must be cross checked to find if any difference between the two files exist.
- You must not make any pull request until there are 0 differences between ans.txt and opp.txt.
- Make sure you put useful comments in your code.
- Please avoid creating new directories if at all possible. Try to fit your work into the existing directory structure. 
- Do not update README.md along with other changes, first create an issue and then link to that issue in your pull request to suggest specific changes required to README.md

#### Typical structure of a program:
```cpp
/**
 * @file 
 * @brief Add one line description here
 * @details 
 * This is a multi line
 * description containing links, references,
 * math equations, etc
 * @author [Name](https://github.com/handle)
 */

#include <bits/stdc++.h>
using namespace std;

datatype solve() {
  //write your code here
}
// Main function
int main() {
  freopen("ipp.txt","r",stdin);
  freopen("ans.txt","w",stdout);
  int t;
  cin>>t;
  while(t--) {
    solve();
  }
  return 0;
}
```
#### Code for checking if 2 files are identical or not
```#include <bits/stdc++.h>
using namespace std;

void compareFiles(FILE *fp1, FILE *fp2) 
{ 
	char ch1 = getc(fp1); 
	char ch2 = getc(fp2); 
	int error = 0, pos = 0, line = 1; 
	while (ch1 != EOF && ch2 != EOF) 
	{ 
		pos++; 
		if (ch1 == '\n' && ch2 == '\n') 
		{ 
			line++; 
			pos = 0; 
		} 
		if (ch1 != ch2) 
		{ 
			error++; 
			cout<<"Line Number : "<<line<<" \tError"
			" Position : "<<pos<<endl; 
		} 
		ch1 = getc(fp1); 
		ch2 = getc(fp2); 
	} 

	cout<<"Total Errors : "<<error;
} 

int main() 
{ 
	// opening both file in read only mode 
	FILE *fp1 = fopen("opp.txt", "r"); 
	FILE *fp2 = fopen("ans.txt", "r"); 

	if (fp1 == NULL || fp2 == NULL) 
	{ 
	cout<<"Error : Files not open"; 
	exit(0); 
	} 

	compareFiles(fp1, fp2); 

	fclose(fp1); 
	fclose(fp2); 
	return 0; 
} 
```
#### New File Name guidelines
- Use lowercase words with ``"_"`` as separator
- For instance
```
MyNewCppClass.CPP       is incorrect
my_new_cpp_class.cpp    is correct format
```
#### Commit Guidelines
- It is recommended to keep your changes grouped logically within individual commits. Maintainers find it easier to understand changes that are logically spilt across multiple commits.  Try to modify just one or two files in the same directory.  Pull requests that span multiple directories are often rejected.

**Happy Coding!**
