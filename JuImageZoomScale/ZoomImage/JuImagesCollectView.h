//
//  JuImagesCollectView.h
//  JuImageZoomScale
//
//  Created by Juvid on 2018/4/4.
//  Copyright © 2018年 Juvid. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JuDefine.h"
@interface JuImagesCollectView : UIView<UICollectionViewDelegate,UICollectionViewDataSource>

@property(nonatomic,strong) NSArray  *ju_ArrList;///< 数据
@property(nonatomic,assign) BOOL  ju_isAlbum;///< 相册
/**
 设置图片

 @param arrList arrlist可为string、JuImageObject、PHAsset、ALAsset
 @param index 当前第几张
 @param frame 小图坐标
 */
-(void)juSetImages:(NSArray *)arrList currentIndex:(NSInteger)index rect:(CGRect)frame;
@property (nonatomic,copy) JuHandle ju_handle;
@end