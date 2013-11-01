
template <typename T>
DvTemporal<T>::DvTemporal(int val)
{
    this->data = val;
}

template <typename T>
int DvTemporal<T>::getDateTime()
{
    return this->data;
}

template <typename T>
DvDuration* DvTemporal<T>::diff(DvTemporal<T> *other)
{
    return DvDuration::getDifference(this, other);
}

