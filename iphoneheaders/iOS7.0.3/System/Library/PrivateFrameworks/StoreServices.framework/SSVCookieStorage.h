/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <StoreServices/StoreServices-Structs.h>
@class SSSQLiteDatabase, NSObject, NSURL;

@interface SSVCookieStorage : NSObject {

	SSSQLiteDatabase* _db;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	NSURL* _storageLocation;

}

@property (readonly) NSURL * storageLocation; 
+(id)sharedInstance;
+(BOOL)_setupCookieDatabase:(id)arg1 ;
+(id)sharedStorage;
-(void)dealloc;
-(id)init;
-(id)initWithStorageLocation:(id)arg1 ;
-(id)_copyPrivateCookiesForURL:(id)arg1 userIdentifier:(id)arg2 ;
-(void)_bindInsertStatement:(sqlite3_stmtRef)arg1 forCookie:(id)arg2 userIdentifier:(id)arg3 ;
-(id)_columnNameForCookieProperty:(id)arg1 ;
-(BOOL)_bindStatement:(sqlite3_stmtRef)arg1 withValues:(id)arg2 ;
-(void)removeAllCookies;
-(void)removeCookiesWithProperties:(id)arg1 ;
-(id)storageLocation;
-(void)synchronizeCookies;
-(id)cookieHeadersForURL:(id)arg1 userIdentifier:(id)arg2 ;
-(void)setCookies:(id)arg1 forUserIdentifier:(id)arg2 ;
-(void)setCookiesForHTTPResponse:(id)arg1 userIdentifier:(id)arg2 ;
@end

