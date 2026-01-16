use std::collections;
// Unorder_set 
use std::collections::HashSet;
// use std

fn main(){
    // HashSet -> Unorderset 
    Unorderset_HashSet();
    // Vector
    vector();
}

fn vector(){
    let mut v:Vec<i32> = Vec::new();
    let mut v = vec![1,3,2,4];
    v.push(43);
    v.push(21);

    match v.get(1){
        Some(x) => println!("{}",x),
        None => println!("Index out of bounds"),
    }
}

fn Unorderset_HashSet(){
    let mut set = HashSet::new();
    set.insert(10);
    set.insert(20);
    set.insert(10);
    set.insert(232);
    set.insert(839);

    println!("{:?}", set);

    // Checking
    if set.contains(&5){
        println!("5 is not in set");
    }else{
        println!("False");
    }

    // Removing

    set.remove(&5);

    // Lenght
    println!("{}", set.len());

    // clear
    //set.clear();

    for value in &set {
        println!("{}", value);
    }

    let v1 = vec![1,2,3,4,5];
    let set1: HashSet<_> =v1.into_iter().collect();
    print!("{:?}", set1);


    // Operation
    let a:HashSet<_> = [1,2,4].into_iter().collect();
    let b:HashSet<_> = [2,4,5].into_iter().collect();

    let Union:HashSet<_> = a.union(&b).copied().collect();
    let Intersection:HashSet<_> = a.intersection(&b).copied().collect();
    let Differnece:HashSet<_> = a.difference(&b).copied().collect();
}