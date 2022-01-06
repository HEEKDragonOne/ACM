var {execSync:exec} = require("child_process")

var exe='1'
var s = 1
var t = 10
let name = 'problem'
for( let i = s ;i <= t;i++){
    exec(`./${exe} < ./data/${name}${i}.in >./data/${name}${i}.out `  )
    console.log(`./${exe} < ./data/${name}${i}.in >./data/${name}${i}.out `  )
}
