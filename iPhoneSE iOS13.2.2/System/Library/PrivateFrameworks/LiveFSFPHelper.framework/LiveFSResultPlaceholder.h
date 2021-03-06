/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/LiveFSFPHelper.framework/LiveFSFPHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber, NSDictionary;

@interface LiveFSResultPlaceholder : NSObject {

	NSString* _path;
	NSString* _filename;
	NSNumber* _modTime;
	NSDictionary* _xattrs;

}

@property (retain) NSString * path;                    //@synthesize path=_path - In the implementation block
@property (retain) NSString * filename;                //@synthesize filename=_filename - In the implementation block
@property (retain) NSNumber * modTime;                 //@synthesize modTime=_modTime - In the implementation block
@property (retain) NSDictionary * xattrs;              //@synthesize xattrs=_xattrs - In the implementation block
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(void)setModTime:(NSNumber *)arg1 ;
-(NSNumber *)modTime;
-(NSDictionary *)xattrs;
-(void)setXattrs:(NSDictionary *)arg1 ;
@end

