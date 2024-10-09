<?php

namespace App\Http\Controllers;

use App\Models\Student;
use App\Models\Course;
use Illuminate\Http\Request;

class InstituteController extends Controller
{
    public function index()
    {
        $students = Student::all();
        $courses = Course::all();
        return view('index', compact('students', 'courses'));
    }

    public function createStudent(Request $request)
    {
        $student = Student::create($request->all());
        return redirect()->back();
    }

    public function createCourse(Request $request)
    {
        $course = Course::create($request->all());
        return redirect()->back();
    }

    public function editStudent($id)
    {
        $student = Student::findOrFail($id);
        return view('edit_student', compact('student'));
    }

    public function updateStudent(Request $request, $id)
    {
        $student = Student::findOrFail($id);
        $student->update($request->all());
        return redirect()->route('index');
    }

    public function deleteStudent($id)
    {
        Student::destroy($id);
        return redirect()->back();
    }
}

