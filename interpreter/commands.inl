INST_START(Colour(255,127,0,255))
INST_PRG(direction.set(1,0,0,0))
INST_END()
INST_START(Colour(255,127,127,255))
INST_PRG(direction.set(-1,0,0,0))
INST_END()
INST_START(Colour(255,191,0,255))
INST_PRG(direction.set(0,1,0,0))
INST_END()
INST_START(Colour(255,191,127,255))
INST_PRG(direction.set(0,-1,0,0))
INST_END()
INST_START(Colour(255,63,0,255))
INST_PRG(direction.set(0,0,1,0))
INST_END()
INST_START(Colour(255,63,127,255))
INST_PRG(direction.set(0,0,-1,0))
INST_END()
INST_START(Colour(255,255,0,255))
INST_PRG(direction.set(0,0,0,1))
INST_END()
INST_START(Colour(255,255,127,255))
INST_PRG(direction.set(0,0,0,-1))
INST_END()
INST_START(Colour(127,127,0,255))
INST_PRG(A += cells[CellPtr])
INST_END()
INST_START(Colour(127,127,31,255))
INST_PRG(A -= cells[CellPtr])
INST_END()
INST_START(Colour(127,127,63,255))
INST_PRG(A *= cells[CellPtr])
INST_END()
INST_START(Colour(127,127,93,255))
INST_PRG(A /= cells[CellPtr])
INST_END()
INST_START(Colour(127,127,127,255))
INST_PRG(A %= cells[CellPtr])
INST_END()
INST_START(Colour(127,127,158,255))
INST_PRG(A++)
INST_END()
INST_START(Colour(127,127,191,255))
INST_PRG(A--)
INST_END()
INST_START(Colour(63,127,0,255))
INST_PRG(CellPtr++)
INST_END()
INST_START(Colour(63,127,127,255))
INST_PRG(CellPtr--)
INST_END()
INST_START(Colour(63,255,0,255))
INST_PRG(cells[CellPtr] = A)
INST_END()
INST_START(Colour(63,255,127,255))
INST_PRG(A = cells[CellPtr])
INST_END()
INST_START(Colour(63,255,255,255))
INST_PRG(A = std::default_random_engine()())
INST_END()
INST_START(Colour(63,255,63,255))
INST_PRG(A = 0)
INST_END()
INST_START(Colour(191,63,127,255))
INST_PRG(if (A == cells[CellPtr]) direction.set(1,0,0,0); else direction.set(-1,0,0,0))
INST_END()
INST_START(Colour(191,127,127,255))
INST_PRG(if (A > cells[CellPtr]) direction.set(1,0,0,0); else direction.set(-1,0,0,0))
INST_END()
INST_START(Colour(191,191,127,255))
INST_PRG(if (A < cells[CellPtr]) direction.set(1,0,0,0); else direction.set(-1,0,0,0))
INST_END()
INST_START(Colour(191,127,0,255))
INST_PRG(if (A >= cells[CellPtr]) direction.set(1,0,0,0); else direction.set(-1,0,0,0))
INST_END()
INST_START(Colour(191,191,0,255))
INST_PRG(if (A <= cells[CellPtr]) direction.set(1,0,0,0); else direction.set(-1,0,0,0))
INST_END()
INST_START(Colour(191,255,0,255))
INST_PRG(if (A != cells[CellPtr]) direction.set(1,0,0,0); else direction.set(-1,0,0,0))
INST_END()
INST_START(Colour(255,255,255,255))
INST_PRG(retLocation = Coord{curLocation.x,curLocation.y,curLocation.z,curLocation.w};
retLocation.update(direction);
retDirection = direction;
curLocation = functions[A];
direction.set(1,0,0,0))
INST_END()
INST_START(Colour(0,0,0,255))
INST_PRG(functions[A] = Coord{curLocation.x+1,curLocation.y,curLocation.z,curLocation.w};
direction.set(1,0,0,0);
def_function = true)
INST_END()
INST_START(Colour(255,0,0,255))
INST_PRG(curLocation = retLocation;
direction = retDirection)
INST_END()
INST_START(Colour(255,127,255,255))
INST_PRG(printf("> ");
scanf("%c",(char*)&A))
INST_END()
INST_START(Colour(255,0,255,255))
INST_PRG(printf("%c",(char)A))
INST_END()
