//
//  ViewController.h
//  PageControl
//
//  Created by Ileana Padilla on 3/11/14.
//  Copyright (c) 2014 paul. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

@interface ViewController : UIViewController <UIScrollViewDelegate>
@property (strong, nonatomic) IBOutlet UIPageControl *pageControl;
@property (strong, nonatomic) IBOutlet UIScrollView *scrollView;
@property (strong, nonatomic) IBOutlet UIImageView *imgView1;
@property (strong, nonatomic) IBOutlet UIImageView *imgView2;
@property (strong, nonatomic) IBOutlet UIImageView *imgView3;
@property (strong, nonatomic) IBOutlet UIImageView *imgView4;

@end
