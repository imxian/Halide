((b.node_type() == IRNodeType::LE) && (
 rewrite((w && ((z + (x + y)) <= y)), (w && ((z + x) <= 0))) ||
 rewrite((w && ((z + (y + x)) <= y)), (w && ((z + x) <= 0))) ||
 rewrite((w && (((x + y) + z) <= y)), (w && ((x + z) <= 0))) ||
 rewrite((w && (((y + x) + z) <= y)), (w && ((x + z) <= 0))) ||
 rewrite((x && ((w + (y + z)) <= y)), (x && ((w + z) <= 0))) ||
 rewrite((x && ((w + (y + z)) <= z)), (x && ((w + y) <= 0))) ||
 rewrite((x && ((w + (z + y)) <= y)), (x && ((w + z) <= 0))) ||
 rewrite((x && ((w + (z + y)) <= z)), (x && ((w + y) <= 0))) ||
 rewrite((x && (((y + z) + w) <= y)), (x && ((z + w) <= 0))) ||
 rewrite((x && (((y + z) + w) <= z)), (x && ((y + w) <= 0))) ||
 rewrite((x && (((z + y) + w) <= y)), (x && ((z + w) <= 0))) ||
 rewrite((x && (((z + y) + w) <= z)), (x && ((y + w) <= 0))) ||
 rewrite((x && (min(y, z) <= select(w, min(y, z), z))), x) ||
 rewrite((x && (min(y, z) <= select(w, min(z, y), z))), x) ||
 rewrite((x && (min(z, y) <= select(w, min(y, z), z))), x) ||
 rewrite((x && (min(z, y) <= select(w, min(z, y), z))), x) ||
 rewrite((x && (select(y, max(w, z), z) <= max(w, z))), x) ||
 rewrite((x && (select(y, max(w, z), z) <= max(z, w))), x) ||
 rewrite((x && (select(y, max(z, w), z) <= max(w, z))), x) ||
 rewrite((x && (select(y, max(z, w), z) <= max(z, w))), x))) ||
((a.node_type() == IRNodeType::LT) && (
((b.node_type() == IRNodeType::LT) && (
 rewrite(((x < y) && (y < (x + c0))), false, (c0 <= 1)) ||
 rewrite(((x < (y + c0)) && (y < (x + c1))), false, ((c0 + c1) <= 1)))))) ||
((a.node_type() == IRNodeType::LE) && (
 rewrite((((w + (y + z)) <= y) && x), (((w + z) <= 0) && x)) ||
 rewrite((((w + (y + z)) <= z) && x), (((w + y) <= 0) && x)) ||
 rewrite((((w + (z + y)) <= y) && x), (((w + z) <= 0) && x)) ||
 rewrite((((w + (z + y)) <= z) && x), (((w + y) <= 0) && x)) ||
 rewrite((((z + (x + y)) <= y) && w), (((z + x) <= 0) && w)) ||
 rewrite((((z + (y + x)) <= y) && w), (((z + x) <= 0) && w)) ||
 rewrite(((((x + y) + z) <= y) && w), (((x + z) <= 0) && w)) ||
 rewrite(((((y + x) + z) <= y) && w), (((x + z) <= 0) && w)) ||
 rewrite(((((y + z) + w) <= y) && x), (((z + w) <= 0) && x)) ||
 rewrite(((((y + z) + w) <= z) && x), (((y + w) <= 0) && x)) ||
 rewrite(((((z + y) + w) <= y) && x), (((z + w) <= 0) && x)) ||
 rewrite(((((z + y) + w) <= z) && x), (((y + w) <= 0) && x)) ||
 rewrite(((min(y, z) <= select(w, min(y, z), z)) && x), x) ||
 rewrite(((min(y, z) <= select(w, min(z, y), z)) && x), x) ||
 rewrite(((min(z, y) <= select(w, min(y, z), z)) && x), x) ||
 rewrite(((min(z, y) <= select(w, min(z, y), z)) && x), x) ||
 rewrite(((select(y, max(w, z), z) <= max(w, z)) && x), x) ||
 rewrite(((select(y, max(w, z), z) <= max(z, w)) && x), x) ||
 rewrite(((select(y, max(z, w), z) <= max(w, z)) && x), x) ||
 rewrite(((select(y, max(z, w), z) <= max(z, w)) && x), x))) ||
((a.node_type() == IRNodeType::And) && (
((b.node_type() == IRNodeType::LT) && (
 rewrite(((w && (x && (y < z))) && (y < u)), (w && (x && (y < min(u, z))))) ||
 rewrite(((w && (z && (x < y))) && (x < u)), (w && (z && (x < min(u, y))))) ||
 rewrite(((w && ((x < y) && z)) && (x < u)), (w && ((x < min(u, y)) && z))) ||
 rewrite(((w && ((y < z) && x)) && (y < u)), (w && ((y < min(u, z)) && x))) ||
 rewrite(((x && (y < z)) && (y < w)), (x && (y < min(z, w)))) ||
 rewrite(((z && (x < y)) && (x < w)), (z && (x < min(y, w)))) ||
 rewrite((((x < y) && z) && (x < w)), ((x < min(w, y)) && z)) ||
 rewrite((((y < z) && x) && (y < w)), ((y < min(w, z)) && x)) ||
 rewrite((((x && (y < z)) && w) && (y < u)), (((y < min(u, z)) && w) && x)) ||
 rewrite((((z && (x < y)) && w) && (x < u)), (((x < min(u, y)) && w) && z)) ||
 rewrite(((((x < y) && z) && w) && (x < u)), (((x < min(y, u)) && w) && z)) ||
 rewrite(((((y < z) && x) && w) && (y < u)), (((y < min(u, z)) && w) && x))))))