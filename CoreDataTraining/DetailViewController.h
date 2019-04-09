//
//  DetailViewController.h
//  CoreDataTraining
//
//  Created by Martin Tracey on 22/05/2013.
//  Copyright (c) 2013 Martin Tracey. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
