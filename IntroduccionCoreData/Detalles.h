//
//  Detalles.h
//  IntroduccionCoreData
//
//  Created by Jesus Victorio on 05/02/14.
//  Copyright (c) 2014 Jesus Victorio. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Detalles : NSManagedObject

@property (nonatomic, retain) NSDate * closeDate;
@property (nonatomic, retain) NSDate * updateDate;
@property (nonatomic, retain) NSNumber * zip;
@property (nonatomic, retain) NSManagedObject *info;

@end
