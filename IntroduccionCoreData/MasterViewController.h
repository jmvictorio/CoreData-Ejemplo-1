//
//  MasterViewController.h
//  IntroduccionCoreData
//
//  Created by Jesus Victorio on 05/02/14.
//  Copyright (c) 2014 Jesus Victorio. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MasterViewController : UITableViewController

@property (nonatomic, strong) NSManagedObjectContext* managedObjectContext;

@property (nonatomic, strong) NSArray *intro;
- (IBAction)add:(id)sender;

@end
