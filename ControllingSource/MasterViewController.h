//
//  MasterViewController.h
//  ControllingSource
//
//  Created by Joseph Howard on 2/9/14.
//  Copyright (c) 2014 Aleryon. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
