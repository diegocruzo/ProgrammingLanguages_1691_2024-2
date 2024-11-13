-- Importar bibliotecas de datos
import System.IO
import Data.List (isInfixOf)

main :: IO()
main = do
    -- Abrir el archivo en modo lectura
    repo <- openFile "datos.txt" ReadMode
    
    -- Extraer todas las líneas del archivo
    contenido <- hGetContents repo
    
    -- Dividir el contenido en líneas
    let lineasDelArchivo = lines contenido
    
    -- Filtrar las líneas que contienen la palabra "Edad"
    let lineasFiltradas = filter (isInfixOf "Edad") lineasDelArchivo
    
    -- Imprimir las líneas filtradas
    putStrLn("Líneas que contienen la palabra 'Edad':")
    mapM_ putStrLn lineasFiltradas
    
    -- Cerrar el archivo
    hClose repo
    
    -- Abrir un archivo nuevo en modo escritura
    repo2 <- openFile "datos2.txt" WriteMode
    
    -- Escribir las líneas filtadas en el nuevo archivo
    mapM_ (hPutStrLn repo2) lineasFiltradas
    
    hClose repo2
    
    