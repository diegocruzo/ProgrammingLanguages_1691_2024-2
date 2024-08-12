-- Función cuadrado
cuadrado :: Double -> Double -- Firma de tipo
cuadrado x = x * x -- Declaración de la función

-- Función promedio
promedio :: Double -> Double -> Double -> Double
--promedio :: Fractional a => a -> a -> a -> a
promedio x y z = (x + y + z) / 3

-- Función sumaMonedas
sumaMonedas :: Num a => a -> a -> a -> a
sumaMonedas x y z = 200 * x + 500 * y + 1000 * z

-- Función ultimaCifra
ultimaCifra :: Integer -> Integer
ultimaCifra x = x `rem` 10

-- Función penultimaCifra
penultimaCifra :: Integer -> Integer
penultimaCifra x = (x `rem` 100) `div` 10

-- Función aproximar
--aproximar :: (RealFrac a, Integral b) => a -> a -> a -> b
aproximar :: Double -> Double -> Double -> Integer
aproximar x y z = round (promedio x y z)

main :: IO() -- Declaración o firma de tipo
main = do
    a <- readLn :: IO Double
    b <- readLn :: IO Double
    c <- readLn :: IO Double
    d <- readLn :: IO Integer
    putStrLn $ "a: " ++ show(a)
    putStrLn $ "b: " ++ show(b)
    putStrLn $ "c: " ++ show(c)
    putStrLn $ "d: " ++ show(d)
    putStrLn "Funciones:"
    putStrLn $ "cuadrado 10 = " ++ show (cuadrado a) -- Ejecución de la función
    putStrLn $ "promedio 10 3 4 = " ++ show (promedio a b c)
    putStrLn $ "sumaMonedas 10 3 4 = $" ++ show (sumaMonedas a b c)
    putStrLn $ "ultimaCifra 279 = " ++ show (ultimaCifra d)
    putStrLn $ "penultimaCifra 279 = " ++ show (penultimaCifra d)
    putStrLn $ "aproximar 10 3 4 = " ++ show (aproximar a b c)