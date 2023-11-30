make && spike --ic=64:4:16 --dc=64:4:8 --log-cache-miss --isa=RV64IMAFDC l1-dcache-miss.riscv
make && spike --ic=64:4:16 --dc=64:4:8 --log-cache-miss --isa=RV64IMAFDC l1-icache-miss.riscv
make && spike --ic=64:4:16 --dc=64:4:8 --log-cache-miss --isa=RV64IMAFDC branch-mispredict.riscv
make && spike --ic=64:4:16 --dc=64:4:8 --log-cache-miss --isa=RV64IMAFDC fp-add.riscv

spike --ic=64:4:16 --dc=64:4:8 --log-cache-miss --isa=RV64IMAFDC --log-commits towers.riscv

#  --ic=<S>:<W>:<B>

# case class ICacheParams(
#     nSets: Int = 64,
#     nWays: Int = 4,
#     rowBits: Int = 128,


# case class DCacheParams(
#     nSets: Int = 64,
#     nWays: Int = 4,
#     rowBits: Int = 64 --> B = 64/8 = 8
