isinputfile=false
output=false
issourcefile=false
iscompileandrun=false
sourcefile="default.c"
inputfilename="default.txt"
runfile="default.out"
runonly=false;

while getopts i:s:c:x:r: flag
do
    case "${flag}" in
        i) isinputfile=true;;
        s) sourcefile="${OPTARG}.c"
        issourcefile=true;;
        c) sourcefile="${OPTARG}.c"
        issourcefile=true
        iscompileandrun=true;;
        x)
        sourcename=${OPTARG}
        sourcefile="$sourcename.c"
        inputfilename="$sourcename.txt"
        isinputfile=true
        issourcefile=true;;
        r) 
        sourcename=${OPTARG}
        runfile="$sourcename.out"
        runonly=true;;
    esac
done

if [ "$issourcefile" = true ] ; then
    echo "Building source: $sourcefile";
    echo "gcc $sourcefile -o ./exec/$sourcefile.out"
    gcc $sourcefile -o ./exec/$sourcefile.out

    if [ "$iscompileandrun" = true ] ; then
        echo "Running program: $sourcefile";
        echo "./exec/$sourcefile.out"
        echo "===Program output:==="
        ./exec/$sourcefile.out
    fi
fi

if [ "$isinputfile" = true ] ; then
    echo "Using input: $inputfilename"
    echo "cat ./input/$inputfilename | ./exec/$sourcefile.out"
    echo "===Program output:==="
    cat ./input/$inputfilename | ./exec/$sourcefile.out
fi


if [ "$runonly" = true ] ; then
    echo "Running: $runfile"
    echo "./exec/$runfile"   
    echo "===Program output:==="
    ./exec/$runfile 
fi