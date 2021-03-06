/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareSheet/UIActivity.h>

@class NSString, UIImage;

@interface PKHandwritingFeedbackActivity : UIActivity {

	/*^block*/id _block;
	NSString* _title;
	UIImage* _image;

}

@property (nonatomic,copy) id block;                        //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIImage * image;               //@synthesize image=_image - In the implementation block
-(id)block;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)activityType;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setBlock:(id)arg1 ;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityImage;
-(void)performActivity;
@end

