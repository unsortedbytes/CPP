package main 
import "fmt"

func main(){
  fmt.Println("Hello World");
  var input_string string;
  fmt.Scanln(&input_string);
  fmt.Println("Hello "+input_string);
}
