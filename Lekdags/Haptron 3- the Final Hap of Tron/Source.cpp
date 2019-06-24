#include <iostream>
#include <Windows.h>
#include <string>

void fun_dialog();

using namespace std;
int main() {
	MessageBox(NULL, TEXT("HELLO"), TEXT("HELLO"), MB_OK);
	cout << "\a";
	int a = 3;
	int* b = &a;
	*b = 25;
	cout << a << endl;
	cout << "\n";
	fun_dialog();
	return 0;
}

void fun_dialog() {
	string name, mood, animal;
	int age;
	cout << "Enter your name: ";
	getline (cin, name);
	cout << "Hello, " << name << ". How are you today?" << endl;
	getline (cin, mood);
if (mood == "good") 
{
	cout << "that is nice to hear!" << endl;
}
else if (mood == "Good")
{
	cout << "that is nice to hear!" << endl;
}
else if (mood == "fine")
{
	cout << "I guess it could be better...AND I AM APOLLO JUSTICE AND I AM FINE" << endl;
}
else if (mood == "Fine")
{
	cout << "I guess it could be better...AND I AM APOLLO JUSTICE AND I AM FINE" << endl;
}
else if (mood == "bad")
{
	cout << "Ugh, yeah, sometimes the world just punches you in the face, the important part is that you punch it in the face back, so start using oil today so that the earth can suffer just like you did, and then your revange will be complete. By the way: I am your father, you have my axe and crime and punichment is quite littaraly the worst thing since Erik Thonfors" << endl;
}
else if (mood == "Bad")
{
	cout << "Ugh, yeah, sometimes the world just punches you in the face, the important part is that you punch it in the face back, so start using oil today so that the earth can suffer just like you did, and then your revange will be complete. By the way: I am your father, you have my axe and crime and punichment is quite littaraly the worst thing since Erik Thonfors" << endl;
}
else if (mood == "terrible")
{
	cout << "Ugh, yeah, sometimes the world just punches you in the face, the important part is that you punch it in the face back, so start using oil today so that the earth can suffer just like you did, and then your revange will be complete. By the way: I am your father, you have my axe and crime and punichment is quite littaraly the worst thing since Erik Thonfors" << endl;
}
else if (mood == "Terrible")
{
	cout << "Ugh, yeah, sometimes the world just punches you in the face, the important part is that you punch it in the face back, so start using oil today so that the earth can suffer just like you did, and then your revange will be complete. By the way: I am your father, you have my axe and crime and punichment is quite littaraly the worst thing since Erik Thonfors" << endl;
}
else if (mood == "awful")
{
	cout << "Ugh, yeah, sometimes the world just punches you in the face, the important part is that you punch it in the face back, so start using oil today so that the earth can suffer just like you did, and then your revange will be complete. By the way: I am your father, you have my axe and crime and punichment is quite littaraly the worst thing since Erik Thonfors" << endl;
}
else if (mood == "Awful")
{
	cout << "Ugh, yeah, sometimes the world just punches you in the face, the important part is that you punch it in the face back, so start using oil today so that the earth can suffer just like you did, and then your revange will be complete. By the way: I am your father, you have my axe and crime and punichment is quite littaraly the worst thing since Erik Thonfors" << endl;
}
else
{cout << "Yeah, see, I didn't quite catch that one..."; }
	cout << "How old are you, " << name << "?" << endl;
	cin >> age;
	cout << "And what is your favourite animal?" << endl;
	cin.ignore();
	getline (cin, animal);
	cout << name << ", today you are feeling " << mood << " and you like to eat " << animal << " with " << age << " sets teeth and sauce." << endl;
}
// vad gör den där?? Jag vet nu vad "den där" gör.

