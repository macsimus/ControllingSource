//
//  DetailViewController.h
//  ControllingSource
//
//  Created by Joseph Howard on 2/9/14.
//  Copyright (c) 2014 Aleryon. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
