#ifndef STORAGECLASS_H
#define STORAGECLASS_H

class StorageClass {
public:
  StorageClass();
  virtual ~StorageClass();
  StorageClass(const StorageClass &other);
  StorageClass &operator=(const StorageClass &other);
  void go();
  void func();

protected:
private:
};

#endif // STORAGECLASS_H
