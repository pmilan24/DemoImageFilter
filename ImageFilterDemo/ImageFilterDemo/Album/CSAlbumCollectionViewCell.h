//
//  CSAlbumCollectionViewCell.h
//  ImageFilterDemo
//
//  Created by Chris Hu on 16/8/9.
//  Copyright © 2016年 icetime17. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ABPieProgress.h"

#import <Photos/Photos.h>

@interface CSAlbumCollectionViewCell : UICollectionViewCell

@property (weak, nonatomic) IBOutlet UIImageView *imageView;

@property (weak, nonatomic) IBOutlet UIView *downloadMaskView;

@property (weak, nonatomic) IBOutlet ABPieProgress *pieProgress;

@property (nonatomic, assign) PHImageRequestID imageRequestID;

@end
