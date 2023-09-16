class Bank:

  def init(self, account number, account holder name, initial balance=0.0):

    self._account_number = account_number
    self._account_holder_name = account_holder_name
    self._account_balance = initial_balance

  def deposit(self, amount):
    if amount > 0:
      self._account_balance += amount
      print("Deposited: {}.New balance: {}".format(amount,self._account_balance))
    else:
      print("Invalid deposit amount.please deposit a positive amount.")

  def withdraw(self, amount):
    if amount > 0 and amount <= self._account_balance:
      self._account_balance -= amount
      print("Withdraw {}. New balance: {}".format(amount,
                                                  self._account_balance))
    else:
      print("Invalid withdrawal amountor insufficient balance.")

  def display_balance(self):
    print("Account balance for {} (Account #{}): {}".format(
        self._account_holder_name, self._account_number,
        self._account_balance))


account = Bank(account_number="12345678",
               account_holder_name="nandy",
               initial_balance=5000.0)
account.display_balance()
account.deposit(500.0)
account.withdraw(200.0)
account.display_balance()