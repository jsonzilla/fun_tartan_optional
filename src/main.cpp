#include "optional.hpp"

#include <iostream>

class OiH {
public:
  tl::optional<int> zuzu;
};

class HiO {
public:
  int chroma{ 9 };
};

void Show(tl::optional<int> i) {
  if (!i.has_value()) {
    std::cout << "option is empty" << std::endl;
  }
  else {
    std::cout << i.value() << std::endl;
  }
}

tl::optional<int> Nullify(int i) {
  return tl::nullopt;
}

tl::optional<int> BizarreOperation(int i) {
  return Nullify(i);
}

int main(int ac, char* av[]) {

  tl::optional<int> z = BizarreOperation(2);
  tl::optional<int> a = tl::nullopt;
  Show(z);
  Show(a);
  Show(OiH().zuzu);

  tl::optional<HiO*> h = new HiO();
  HiO* hp = *h;
  delete hp;
  if (h.has_value()) {
    std::cout << "crazy things" << std::endl;
    HiO* v = *h;
    Show(v->chroma); // ops
  }

  HiO* g = new HiO();
  {
    tl::optional<HiO*> h = g;
  }
  Show(g->chroma); // ok ??

	return 0;
}
