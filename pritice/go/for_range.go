package main

import "fmt"

func main() {
    slice := []int{0, 1, 2, 3}
    myMap := make(map[int]*int)

    for index, value := range slice {
        num := value
        fmt.Printf("value :%v, &value : %v\n", value,&value)
        fmt.Printf("num :%v, &num : %v\n", num,&num)
        myMap[index] = &num
    }
    fmt.Println("=====new map=====")
    prtMap(myMap)
}

func prtMap(myMap map[int]*int) {
    for key, value := range myMap {
        fmt.Printf("map[%v]=%v\n", key, *value)
    }
}
