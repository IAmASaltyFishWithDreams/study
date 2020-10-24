package main

import "fmt"

type Student struct {
	name string
	id int
}

func main() {
	i := make([]interface(), 3)
	i[0] = 1
	i[1] = "hello world"
	i[2] = Student{"jyy", 999}
	for index,data := range i {
		switch value := date.(type) {
		case int:
			fmt.Printf("x[%d],type int, content %d\n", index, value)
		case string:
			fmt.Printf("x[%d], type string, content %s\n", index, value)
		case Student:
			fmt.Printf("x[d], type Student, content name : %s, id : %d", value.name, value.id)
		}
	}
}
