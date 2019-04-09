//
//  MasterViewController.h
//  CoreDataTraining
//
//  Created by Martin Tracey on 22/05/2013.
//  Copyright (c) 2013 Martin Tracey. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
