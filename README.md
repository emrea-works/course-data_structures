# CS201 Elementary Data Structures Course

###### Saylor Academy Certification Program

**Notes**

During interface vs implementation lecture I tried to make comparison with different languages to practice at all in OOP way, and during working on Solidity version of the given code in C++ sent me to a exploration more about Solidity and found that very important conversation:

> Is a smart contract analogous to an OOP class? [^1]

> I think people are probably going to say yes, but I would argue strongly that it is not.
>
> In a C++ class, for example, the data that comprises the class is per-instantiation. In other words classInstance1 and classInstance2 each have their own state.
>
> In Solidity there is only one contract in the program. In this sense the state of the contract is a singleton -- all the state is program-wide level. It's as if the entire class were global. Another way of saying this is that all the data fields of the contract are like C++ static members.
>
> This is exactly why the DAO got hacked. The single DAO contract's state was global, and upon re-entry the same data was being accessed in both the caller and the called into function.
>
> As far as every transaction instantiating an object, that's not quite right. The contract is instantiated on creation and the state persists across transactions.

[^1]: [Is a smart contract analogous to an OOP class?](https://ethereum.stackexchange.com/questions/12596/is-a-smart-contract-analogous-to-an-oop-class?rq=1)
