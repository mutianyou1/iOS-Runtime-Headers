/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:58 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/Frameworks/MTLSpline.framework/MTLSpline
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MTLSpline/MTLSpline-Structs.h>
@class NSMutableDictionary, MTLSPath;

@interface MTLSAnimatablePathCollection : NSObject {

	vector<ControlPoint, std::__1::allocator<ControlPoint> >* _controlPointStateVector;
	NSMutableDictionary* _paths;
	MTLSPath* _defaultPath;
	ControlPoint* _controlPointState;

}

@property (readonly) NSMutableDictionary * paths;                          //@synthesize paths=_paths - In the implementation block
@property (readonly) MTLSPath * defaultPath;                               //@synthesize defaultPath=_defaultPath - In the implementation block
@property (assign,nonatomic) ControlPoint* controlPointState;              //@synthesize controlPointState=_controlPointState - In the implementation block
-(MTLSPath *)defaultPath;
-(NSMutableDictionary *)paths;
-(void)setPath:(id)arg1 forKey:(id)arg2 ;
-(id)initWithDefaultPath:(id)arg1 ;
-(ControlPoint*)blendPath:(id)arg1 withPath:(id)arg2 byAmount:(float)arg3 ;
-(ControlPoint*)controlPointState;
-(void)removePath:(id)arg1 ;
-(void)setControlPointState:(ControlPoint*)arg1 ;
@end
