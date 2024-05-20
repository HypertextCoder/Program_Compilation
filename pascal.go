package main

import (
    "fmt"
)

func pascalTriangle(num int) {
    var res [][]int

    for i := 0; i < num; i++ {
        row := make([]int, i+1)
        factorial := 1

        for j := 0; j <= i; j++ {
            row[j] = factorial
            factorial = factorial * (i - j) / (j + 1)
        }

        for _, val := range row {
            fmt.Print(val, "  ")
        }
        fmt.Println()
        res = append(res, row)
    }

    fmt.Println(res)
}

func main() {
    num := 59
    pascalTriangle(num)
}
