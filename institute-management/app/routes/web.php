<?php

use Illuminate\Support\Facades\Route;
use App\Http\Controllers\InstituteController;

Route::get('/', [InstituteController::class, 'index'])->name('index');
Route::post('/students', [InstituteController::class, 'createStudent']);
Route::post('/courses', [InstituteController::class, 'createCourse']);
Route::get('/students/edit/{id}', [InstituteController::class, 'editStudent']);
Route::post('/students/update/{id}', [InstituteController::class, 'updateStudent']);
Route::get('/students/delete/{id}', [InstituteController::class, 'deleteStudent']);

