//
//  DBManager.h
//  SQLiteDatabase
//
//  Created by LLDM on 29/07/2016.
//  Copyright © 2016 LLDM. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <sqlite3.h>

@interface DBManager : NSObject {
    NSString *databasePath;
}

    +(DBManager*)getSharedInstance;
    -(BOOL)createDB;
    -(BOOL) saveData:(NSString*)registerNumber
                name:(NSString*)name
          department:(NSString*)department
                year:(NSString*)year; -(NSArray*)
findByRegisterNumber:(NSString*)registerNumber;

@end
