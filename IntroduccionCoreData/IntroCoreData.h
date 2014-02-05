//
//  IntroCoreData.h
//  IntroduccionCoreData
//
//  Created by Jesus Victorio on 05/02/14.
//  Copyright (c) 2014 Jesus Victorio. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Detalles;

@interface IntroCoreData : NSManagedObject

@property (nonatomic, retain) NSString * state;
@property (nonatomic, retain) NSString * city;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) Detalles *detalles;

@end
