//#include <iostream>
//using namespace std;
//
//// task.1
////
////
////MyString
////1)1 ci xarakter qaytaran method
////2)sonuncu xarakter qaytaran method 
////3) Append(const char* text)  
////4) s.rfind('a') 
////5)s.find('w')//6 xarakterin indexi qayitsin
////6)s.clear()//string silinsin delete edin
//
//
//class MyString {
//	char* str;
//public:
//	MyString(const char* str) {
//		SetStr(str);
//	}
//
//	MyString& operator=(const char* value) {
//		SetStr(value);
//		return *this;
//	}
//
//	MyString& operator=(const MyString& obj) {
//		SetStr(obj.str);
//		return *this;
//	}
//
//	void SetStr(const char* str) {
//		delete[] this->str;
//		this->str = new char[strlen(str) + 1];
//		strcpy_s(this->str, strlen(str) + 1, str);
//	}
//	
//	const char* GetStr() const { return str; }
//
//
//	// 1
//	char FirstCh(const char* str) {
//		return str[0];
//	}
//
//
//	//2
//	char LastCh(const char* str) {
//		int len = strlen(str);
//		return str[len - 1];
//	}
//
//	//3
//	char* Append(const char* text) {
//		int len = strlen(str);
//		int lentext = strlen(text);
//		int tempsize = len + lentext;
//		char* temp = new char[tempsize];
//		int i = 0;
//		for (; i < len; i++) {
//			temp[i] = str[i];
//		}
//		for (; i < tempsize; i++) {
//			temp[i] = text[i - lentext];
//		}
//		str = temp;
//		temp = nullptr;
//		return str;
//	}
//
//	//4 
//	int SRfind(char c) {
//		int len = strlen(str);
//		for (int i = len - 1; i >= 0; i--) {
//			if (str[i] == c) {
//				return i;
//			}
//		}
//	}
//
//	//5
//	int Sfind(char c) {
//		int len = strlen(str);
//		for (int i = 0; i < len; i++) {
//			if (str[i] == c) {
//				return i;
//			}
//		}
//	}
//
//	//6
//	void Sclear() {
//		delete[] str;
//	}
//
//	~MyString() {
//		delete[] str;
//	}
//};
//
//
//void main() {
//	MyString str("Hakuna");
//	cout << str.FirstCh("Hakuna") << endl;
//	cout << str.LastCh("Hakuna") << endl;
//	cout << str.Append("Matata") << endl;
//	cout << str.SRfind('k') << endl;
//	cout << str.Sfind('H');
//	//str.Sclear();
//}