/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSLayoutYAxisAnchor, NSLayoutDimension;


@protocol UILayoutSupport <NSObject>
@property (nonatomic,readonly) double length; 
@property (readonly) NSLayoutYAxisAnchor * topAnchor; 
@property (readonly) NSLayoutYAxisAnchor * bottomAnchor; 
@property (readonly) NSLayoutDimension * heightAnchor; 
@required
-(double)length;
-(NSLayoutYAxisAnchor *)topAnchor;
-(NSLayoutDimension *)heightAnchor;
-(NSLayoutYAxisAnchor *)bottomAnchor;

@end

