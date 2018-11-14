# @TEST-EXEC: bro -NN Johanna::ROCA |sed -e 's/version.*)/version)/g' >output
# @TEST-EXEC: btest-diff output
