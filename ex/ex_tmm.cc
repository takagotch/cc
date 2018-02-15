class TransposedMatMul : public Benchmark {
  public:
    void runTransposedMatMul(
      uint32_t N,
      uint32_t M,
      uint32_t K,
      const tc::MappinOptions& options,
      bool useFlags = false);
};



