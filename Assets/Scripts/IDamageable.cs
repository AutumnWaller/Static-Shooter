using UnityEngine;
public interface IDamageable
{
    void TakeDamage(int damage);
    void TakeKnockBack(Vector3 direction);
}
