#include <iostream>

#include <cstring>




#define MAX_LEN 100




class StringNode {

public:

char str[MAX_LEN];

StringNode* next;




StringNode(const char* s) {

strncpy(str, s, MAX_LEN);

str[MAX_LEN - 1] = '\0';

next = nullptr;

}




void reverseString() {

int len = strlen(str);

for (int i = 0; i < len / 2; i++) {

char temp = str[i];

str[i] = str[len - i - 1];

str[len - i - 1] = temp;

}

}

};




int main() {

char str1[MAX_LEN], str2[MAX_LEN], str3[MAX_LEN];




std::cin.getline(str1, MAX_LEN);

std::cin.getline(str2, MAX_LEN);

std::cin.getline(str3, MAX_LEN);




StringNode n1(str1);

StringNode n2(str2);

StringNode n3(str3);




n1.reverseString();

n2.reverseString();

n3.reverseString();




n1.next = &n2;

n2.next = &n3;

n3.next = nullptr;




StringNode* current = &n1;

while (current != nullptr) {

std::cout << current->str << std::endl;

current = current->next;

}




return 0;

} 
