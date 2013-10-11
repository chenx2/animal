#include <iostream>
#include <string>
using namespace std;
/*
void for_cat(){
  string feline;
  cout<<"name a cat breed: ";
  cin >> feline;
  if(feline == "ragdoll")
  {
    cout<< feline <<" is my favorite cat, too."<<endl;
  }else
  {
    cout<<"I love all the cat!\n";
  }
}

void for_dog(){
  string canine;
  cout<<"name a dog breed: ";
  cin >> canine;
  if(canine == "chihuahua")
  {
    cout<< canine <<" is my favorite dog, too."<<endl;
  }else
  {
    cout<<"not my type dog\n";
  }
}
*/
void ask(string animal_type);
  string get_input(string animal_type);
  string get_output(string input, string animal_type);
    string get_default_message(string animal_type);
    string get_favorite(string animal_type);
      string get_selection(string animal_type, string option_a, string option_b);

int main() {
  ask("dog");
  ask("cat");
  return 0;    
}

void ask(string animal_type){
  string input;
  input = get_input(animal_type);
  cout << get_output(input, animal_type);
} 

string get_input(string animal_type){
  string input;
  cout<<"name a "<< animal_type <<" breed: ";
  cin >> input;
  return input;
}

string get_output(string input, string animal_type){
  string message;
  string favorite = get_favorite(animal_type);

  if(input == favorite){
    message = input + " is my favorite " + animal_type + ", too.\n";
  }
  else{
    message = get_default_message(animal_type);
  }
  return message;
}

string get_default_message(string animal_type){
  return get_selection(animal_type, "not my type dog\n", "I love all the cat!\n");
}

string get_favorite(string animal_type){
  return get_selection(animal_type, "chihuahua", "ragdoll");
}

string get_selection(string animal_type, string option_a, string option_b){
  return (animal_type == "dog") ? option_a : option_b;
}
