package main

import "fmt"

func main() {
    var year int
    fmt.Println(" ") //Enter the year 
    fmt.Scanln(&year)

    birthYear := 2024 - year
    age := "years old"
    fmt.Println(birthYear, age)
}
