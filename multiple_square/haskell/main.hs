mul_square :: Double -> Int -> Double
mul_square a 0 = a
mul_square a n = mul_square a (n-1) * mul_square a (n-1)

main :: IO ()
main = do
    putStrLn "Real number a:"
    first <- getLine
    let a = read first :: Double
    putStrLn "Positive integer n: "
    first <- getLine
    let n = read first :: Int
    putStr "Result: "
    print (mul_square a n)
